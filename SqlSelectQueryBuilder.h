#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"SQLException.h"

class SqlSelectQueryBuilder
{
public:
	SqlSelectQueryBuilder();
	SqlSelectQueryBuilder& AddColumn(const std::string& column) noexcept;
	SqlSelectQueryBuilder& AddColumns(const std::vector<std::string>& columns) noexcept;
	SqlSelectQueryBuilder& AddWhere(const std::string& column, const std::string& value) noexcept;
	SqlSelectQueryBuilder& AddWhere(const std::map<std::string, std::string>& kv) noexcept;
	SqlSelectQueryBuilder& AddFrom(const std::string& table) noexcept;
	bool BuildQuery();
	std::string get_select() noexcept;
	~SqlSelectQueryBuilder();

private:
	std::string sql_select;
	std::string table;
	std::vector<std::string> columns;
	std::map<std::string, std::string> wheres;
};