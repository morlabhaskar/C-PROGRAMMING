// ✅ Format Specifiers with Ranges

// Format	    C Data Type	                Size (bytes)	       Signed Range	                 Unsigned Range
// %d / %i	        int	                         4 bytes   –2,147,483,648 to 2,147,483,647           	N/A
// %u	        unsigned int	              4 bytes	              N/A	                   0 to 4,294,967,295
// %hd	            short int	                 2 bytes	       –32,768 to 32,767	                                                        N/A
// %hu	        unsigned short int	             2 bytes	              N/A	                    0 to 65,535
// %ld	             long int	                4 or 8 byte   –2,147,483,648 to 2,147,483,647 (4B)	    N/A
// %lu	       unsigned long int	           4 or 8 bytes	           N/A	                  0 to 4,294,967,295 (if 4B)
// %lld	         long long int	                  8 bytes	  –9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	
// %llu	        unsigned long long int	          8 bytes	             N/A	              0 to 18,446,744,073,709,551,615
// %f	              float	                       4 bytes	    ~±3.4e−38 to ±3.4e+38	                  —
// %lf	               double	                    8 bytes     	~±1.7e−308 to ±1.7e+308              	—
// %Lf	              long double	              8 to 16 bytes	      ~±1.1e−4932 to ±1.1e+4932 (system dependent)	—
// %c	                char	                   1 byte	           –128 to 127                       	0 to 255
// %s	            char* (string)	                  —	                    N/A                           	N/A
// %p	             void* (pointer)	            4 or 8 bytes	 System dependent (memory address)	        —
// %x / %X	          unsigned int	                  4 bytes	            N/A            	0 to 4,294,967,295 (hex format)
// %o	              unsigned int	                  4 bytes	            N/A	                    0 to 4,294,967,295 (octal format)