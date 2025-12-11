package com.testing;

import com.testing.model.User;
import com.testing.repo.UserRepository;
import com.testing.service.UserService;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.*;
import java.util.Optional;
import static org.assertj.core.api.Assertions.assertThat;
import static org.mockito.Mockito.*;

@ExtendWith(org.mockito.junit.jupiter.MockitoExtension.class)
class UserServiceTest {

    @Mock
    UserRepository repo;

    @InjectMocks
    UserService service;

    @Test
    void devuelveNombreCuandoExiste() {
        when(repo.findById(1L)).thenReturn(Optional.of(new User(1L, "Ana")));

        String nombre = service.getUserName(1L);

        assertThat(nombre).isEqualTo("Ana");
        verify(repo).findById(1L);
    }

    @Test
    void devuelveNullCuandoNoExiste() {
        when(repo.findById(2L)).thenReturn(Optional.empty());

        String nombre = service.getUserName(2L);

        assertThat(nombre).isNull();
        verify(repo).findById(2L);
    }
}