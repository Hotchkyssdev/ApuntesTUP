package com.testing.repo;
import com.testing.model.User;
import java.util.Optional;

public interface UserRepository {
    Optional<User> findById(long id);
}