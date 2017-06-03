int	main(int ac, char **av)
{	
	int fd;
	
	(void)ac;
	fd = open(av[1], O_RDONLY);
	if (ac != 2) // !(valid file)
		write(2, "error\n", 6);
	return (0);
}
