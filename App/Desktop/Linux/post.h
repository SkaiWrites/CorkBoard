#ifndef POST_H
#define POST_H

#include "User.h"

#include <memory>
#include <vector>
#include <string>
#include <ctime>
#include <list>
#include <utility>

class User;

class Post :
{
	public:
	{
		enum class Type {Addition, Comment};
		Post() = delete;
		Post(std::string json);
	}
	protected:
	{
		Type type{Type::Comment};
		std::vector<std::string> content{};
		std::unique_ptr<Post> parent{NULL};
		std::unique_ptr<User> author{NULL};
		time_t datetime{};
		std::list<std::pair<std::unique_ptr<User>, int>> likes{};
		std::list<std::unique_ptr<Post>> comments;
		
	}
	
};

#endif !POST_H
