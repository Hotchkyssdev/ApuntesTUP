package com.testing.service;
import com.testing.repo.UserRepository;
import com.testing.model.User;
import java.util.Optional;

public class UserService {
    private final UserRepository repo;
    public UserService(UserRepository repo) { this.repo = repo; }

    public String getUserName(long id) {
        Optional<User> u = repo.findById(id);
        return u.map(User::getName).orElse(null);
    }
}