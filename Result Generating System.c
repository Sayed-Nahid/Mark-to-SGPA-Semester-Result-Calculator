#include<stdio.h>
            //Code for first semester start
            void first()
            {
                int i, exit, flag_exit = 0, j = 0, output_controll = 0, ca1 = 0, ca2 = 0, ca3 = 0, cb1 = 0, cb2 = 0, cb3 = 0, cc1 = 0, cc2 = 0, cd = 0, cf = 0;
                float math, cse122, cse123, phy123, phy124, eng, m, c122, c123, p123, p124, e;
                /*         Code Start */
                float student_number_result[45];
                int id[45];
                for(i=0;i<45;i++)
                {
                    j++;
                    printf("\n\n");
                    printf("Course Code\tCourse\t\t\t\t\t\t\t Title Credit\tResult\n");
                    printf("MAT 111    \tMathematics-I: Basic Mathematics\t\t\t     3\t\t");
                    scanf("%f", &m);
                    m = m * 10;
                    switch((int)m)
                    {
                    case 800 ... 1000:
                        {
                            math = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            math = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            math = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            math = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            math = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            math = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            math = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            math = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            math = 2.00;
                            break;
                        }
                    default:
                        {
                            math = 0.00;
                        }
                    }
                    printf("CSE 112    \tComputer Fundamentals\t\t\t\t\t     3\t\t");
                    scanf("%f", &c122);
                    c122 = c122 * 10;
                    switch((int)c122)
                    {
                    case 800 ... 1000:
                        {
                            cse122 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            cse122 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            cse122 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            cse122 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            cse122 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            cse122 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            cse122 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            cse122 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            cse122 = 2.00;
                            break;
                        }
                    default:
                        {
                            cse122 = 0.00;
                        }
                    }
                    printf("GED 111    \tHistory of Bangladesh and Bangla Language.\t\t     3\t\t");
                    scanf("%f", &c123);
                    c123 = c123 * 10;
                    switch((int)c123)
                    {
                    case 800 ... 1000:
                        {
                            cse123 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            cse123 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            cse123 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            cse123 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            cse123 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            cse123 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            cse123 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            cse123 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            cse123 = 2.00;
                            break;
                        }
                    default:
                        {
                            cse123 = 0.00;
                        }
                    }
                    printf("PHY 113    \tBasic Physics\t\t\t\t\t\t     3\t\t");
                    scanf("%f", &p123);
                    p123 = p123 * 10;
                    switch((int)p123)
                    {
                    case 800 ... 1000:
                        {
                            phy123 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            phy123 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            phy123 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            phy123 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            phy123 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            phy123 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            phy123 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            phy123 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            phy123 = 2.00;
                            break;
                        }
                    default:
                        {
                            phy123 = 0.00;
                        }
                    }
                    printf("PHY 114    \tBasic Physics Lab     \t\t\t\t\t     1\t\t");
                    scanf("%f", &p124);
                    p124 = p124 * 10;
                    switch((int)p124)
                    {
                    case 800 ... 1000:
                        {
                            phy124 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            phy124 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            phy124 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            phy124 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            phy124 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            phy124 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            phy124 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            phy124 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            phy124 = 2.00;
                            break;
                        }
                    default:
                        {
                            phy124 = 0.00;
                        }
                    }
                    printf("ENG 113    \tBasic Functional English and English Spoken\t\t     3\t\t");
                    scanf("%f", &e);
                    e = e * 10;
                    switch((int)e)
                    {
                    case 800 ... 1000:
                        {
                            eng = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            eng = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            eng = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            eng = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            eng = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            eng = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            eng = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            eng = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            eng = 2.00;
                            break;
                        }
                    default:
                        {
                            eng = 0.00;
                        }
                    }
                    if((math == 0.00) || (cse122 == 0.00) || (cse123 == 0.00) || (phy123 == 0.00) || (phy124 == 0.00) || (eng == 0.00))
                    {
                        student_number_result[i] = 0.00;
                    }
                    else
                    {
                        student_number_result[i] = (((3*math)+(3*cse122)+(3*cse123)+(3*phy123)+(1*phy124)+(3*eng))/(16));
                    }
                    printf("\n");
                        id[i] = j;
                        output_controll = id[i];
                        printf("&---------------------------------------------------------------------------------------------------------------------&\n");
                        printf(" Student ID: 202-15-%d \t", id[i]); printf("\t\t----------------------->>>>>>>>\t\t");                  printf("SGPA = %0.2f\n", student_number_result[i]);
                        printf("&---------------------------------------------------------------------------------------------------------------------&");
                    while(1)
                    {
                        printf("\n\n");
                        printf("Do You Want to Exit?\n");
                        printf("Yes = 1.\n");
                        printf("No = 2.\n");
                        scanf("%d", &exit);
                        if(exit == 1)
                        {
                            flag_exit = 1;
                            break;
                        }
                        else if(exit == 2)
                        {
                            flag_exit = 2;
                            break;
                        }
                        else
                        {
                            printf("...Invalid Input!!!!!!!! [ 1 = yes, 2 = no ] < Thank you. >\n");
                            continue;
                        }
                    }
                    if(flag_exit == 1)
                    {
                        break;
                    }
                    else if (flag_exit == 2)
                    {
                        continue;
                    }
                }
                /* A+ Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       A+ Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if(student_number_result[i] == 4.00)
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.0f\n", student_number_result[i]);
                                ca1 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got A+(SGPA 4.00) }--->\t\t\t\t      |\n", ca1);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* A+ Category end */
                /* A Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       A Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.75) && (student_number_result[i] < 4.00))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                ca2 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got A(SGPA 3.75) }--->\t\t\t\t      |\n", ca2);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* A Category end */
                /* A- Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       A- Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.50) && (student_number_result[i] < 3.75))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                ca3 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got A-(SGPA 3.50) }--->\t\t\t\t      |\n", ca3);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* A- Category end */
                /* B+ Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       B+ Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.25) && (student_number_result[i] < 3.50))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cb1 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got B+(SGPA 3.25) }--->\t\t\t\t      |\n", cb1);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* B+ Category end */
                /* B Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       B Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.00) && (student_number_result[i] < 3.25))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cb2 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got B(SGPA 3.00) }--->\t\t\t\t      |\n", cb2);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* B Category end */
                /* B- Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       B- Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.75) && (student_number_result[i] < 3.00))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cb3 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got B-(SGPA 2.75) }--->\t\t\t\t      |\n", cb3);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* B- Category end */
                /* C+ Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       C+ Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.50) && (student_number_result[i] < 2.75))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cc1 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got C+(SGPA 2.50) }--->\t\t\t\t      |\n", cc1);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* C+ Category end */
                /* C Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       C Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.25) && (student_number_result[i] < 2.50))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cc2 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got C(SGPA 2.25) }--->\t\t\t\t      |\n", cc2);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* C Category end */
                /* D Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       D Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.00) && (student_number_result[i] < 2.25))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cd += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got D(SGPA 2.00) }--->\t\t\t\t      |\n", cd);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* D Category end */
                /* F Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       F Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if(student_number_result[i] == 0.00)
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cf += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who Fail(SGPA 0.00) }--->\t\t\t\t      |\n", cf);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* F Category end */
                /*         Code End */
            }

             //Code for first semester end














            //Code for second semester start

            void second()
            {
                int i, exit, flag_exit = 0, j = 0, output_controll = 0, ca1 = 0, ca2 = 0, ca3 = 0, cb1 = 0, cb2 = 0, cb3 = 0, cc1 = 0, cc2 = 0, cd = 0, cf = 0;
                float math, cse122, cse123, phy123, phy124, eng, m, c122, c123, p123, p124, e;
                /*         Code Start */
                float student_number_result[45];
                int id[45];
                for(i=0;i<45;i++)
                {
                    j++;
                    printf("\n\n");
                    printf("Course Code\tCourse\t\t\t\t\t\t\t Title Credit\tResult\n");
                    printf("MAT 121    \tMathematics-II: Linear Algebra & Coordinate Geometry\t     3\t\t");
                    scanf("%f", &m);
                    m = m * 10;
                    switch((int)m)
                    {
                    case 800 ... 1000:
                        {
                            math = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            math = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            math = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            math = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            math = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            math = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            math = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            math = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            math = 2.00;
                            break;
                        }
                    default:
                        {
                            math = 0.00;
                        }
                    }
                    printf("CSE 122    \tProgramming and Problem Solving\t\t\t\t     3\t\t");
                    scanf("%f", &c122);
                    c122 = c122 * 10;
                    switch((int)c122)
                    {
                    case 800 ... 1000:
                        {
                            cse122 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            cse122 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            cse122 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            cse122 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            cse122 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            cse122 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            cse122 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            cse122 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            cse122 = 2.00;
                            break;
                        }
                    default:
                        {
                            cse122 = 0.00;
                        }
                    }
                    printf("CSE 123    \tProblem Solving Lab\t\t\t\t\t     1\t\t");
                    scanf("%f", &c123);
                    c123 = c123 * 10;
                    switch((int)c123)
                    {
                    case 800 ... 1000:
                        {
                            cse123 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            cse123 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            cse123 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            cse123 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            cse123 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            cse123 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            cse123 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            cse123 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            cse123 = 2.00;
                            break;
                        }
                    default:
                        {
                            cse123 = 0.00;
                        }
                    }
                    printf("PHY 123    \tPhysics-II: Electricity: Magnetism and Modern Physics\t     3\t\t");
                    scanf("%f", &p123);
                    p123 = p123 * 10;
                    switch((int)p123)
                    {
                    case 800 ... 1000:
                        {
                            phy123 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            phy123 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            phy123 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            phy123 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            phy123 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            phy123 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            phy123 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            phy123 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            phy123 = 2.00;
                            break;
                        }
                    default:
                        {
                            phy123 = 0.00;
                        }
                    }
                    printf("PHY 124    \tPhysics-II Lab     \t\t\t\t\t     1\t\t");
                    scanf("%f", &p124);
                    p124 = p124 * 10;
                    switch((int)p124)
                    {
                    case 800 ... 1000:
                        {
                            phy124 = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            phy124 = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            phy124 = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            phy124 = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            phy124 = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            phy124 = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            phy124 = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            phy124 = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            phy124 = 2.00;
                            break;
                        }
                    default:
                        {
                            phy124 = 0.00;
                        }
                    }
                    printf("ENG 123    \tWriting and Comprehension\t\t\t\t     1\t\t");
                    scanf("%f", &e);
                    e = e * 10;
                    switch((int)e)
                    {
                    case 800 ... 1000:
                        {
                            eng = 4.00;
                            break;
                        }
                    case 750 ... 799:
                        {
                            eng = 3.75;
                            break;
                        }
                    case 700 ... 749:
                        {
                            eng = 3.50;
                            break;
                        }
                    case 650 ... 699:
                        {
                            eng = 3.25;
                            break;
                        }
                    case 600 ... 649:
                        {
                            eng = 3.00;
                            break;
                        }
                    case 550 ... 599:
                        {
                            eng = 2.75;
                            break;
                        }
                    case 500 ... 549:
                        {
                            eng = 2.50;
                            break;
                        }
                    case 450 ... 499:
                        {
                            eng = 2.25;
                            break;
                        }
                    case 400 ... 449:
                        {
                            eng = 2.00;
                            break;
                        }
                    default:
                        {
                            eng = 0.00;
                        }
                    }
                    if((math == 0.00) || (cse122 == 0.00) || (cse123 == 0.00) || (phy123 == 0.00) || (phy124 == 0.00) || (eng == 0.00))
                    {
                        student_number_result[i] = 0.00;
                    }
                    else
                    {
                        student_number_result[i] = (((3*math)+(3*cse122)+(1*cse123)+(3*phy123)+(1*phy124)+(1*eng))/(12));
                    }
                    printf("\n");
                        id[i] = j;
                        output_controll = id[i];
                        printf("&---------------------------------------------------------------------------------------------------------------------&\n");
                        printf(" Student ID: 202-15-%d \t", id[i]); printf("\t\t----------------------->>>>>>>>\t\t");                  printf("SGPA = %0.2f\n", student_number_result[i]);
                        printf("&---------------------------------------------------------------------------------------------------------------------&");
                    while(1)
                    {
                        printf("\n\n");
                        printf("Do You Want to Exit?\n");
                        printf("Yes = 1.\n");
                        printf("No = 2.\n");
                        scanf("%d", &exit);
                        if(exit == 1)
                        {
                            flag_exit = 1;
                            break;
                        }
                        else if(exit == 2)
                        {
                            flag_exit = 2;
                            break;
                        }
                        else
                        {
                            printf("...Invalid Input!!!!!!!! [ 1 = yes, 2 = no ] < Thank you. >\n");
                            continue;
                        }
                    }
                    if(flag_exit == 1)
                    {
                        break;
                    }
                    else if (flag_exit == 2)
                    {
                        continue;
                    }
                }
                /* A+ Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       A+ Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if(student_number_result[i] == 4.00)
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.0f\n", student_number_result[i]);
                                ca1 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got A+(SGPA 4.00) }--->\t\t\t\t      |\n", ca1);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* A+ Category end */
                /* A Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       A Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.75) && (student_number_result[i] < 4.00))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                ca2 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got A(SGPA 3.75) }--->\t\t\t\t      |\n", ca2);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* A Category end */
                /* A- Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       A- Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.50) && (student_number_result[i] < 3.75))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                ca3 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got A-(SGPA 3.50) }--->\t\t\t\t      |\n", ca3);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* A- Category end */
                /* B+ Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       B+ Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.25) && (student_number_result[i] < 3.50))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cb1 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got B+(SGPA 3.25) }--->\t\t\t\t      |\n", cb1);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* B+ Category end */
                /* B Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       B Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 3.00) && (student_number_result[i] < 3.25))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cb2 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got B(SGPA 3.00) }--->\t\t\t\t      |\n", cb2);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* B Category end */
                /* B- Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       B- Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.75) && (student_number_result[i] < 3.00))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cb3 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got B-(SGPA 2.75) }--->\t\t\t\t      |\n", cb3);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* B- Category end */
                /* C+ Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       C+ Category     |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.50) && (student_number_result[i] < 2.75))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cc1 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got C+(SGPA 2.50) }--->\t\t\t\t      |\n", cc1);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* C+ Category end */
                /* C Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       C Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.25) && (student_number_result[i] < 2.50))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cc2 += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got C(SGPA 2.25) }--->\t\t\t\t      |\n", cc2);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* C Category end */
                /* D Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       D Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if((student_number_result[i] >= 2.00) && (student_number_result[i] < 2.25))
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cd += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who got D(SGPA 2.00) }--->\t\t\t\t      |\n", cd);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* D Category end */
                /* F Category start */
                printf("\t\t\t\t\t~***********************~");
                printf("\n \t\t\t\t\t|       F Category      |\n");
                printf("\t\t\t\t\t*~~~~~~~~~~~~~~~~~~~~~~~*\n\n");
                for(i=0; i < output_controll; i++)
                {
                    if(student_number_result[i] == 0.00)
                    {
                                printf("\t\t\tStudent ID : 202-15-%d\t", id[i]);
                                printf("--------->>>\t");
                                printf("SGPA %0.2f\n", student_number_result[i]);
                                cf += 1;
                    }
                }
                printf("&^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^&");
                printf("\n|\t\t\t\t<---{ There are %d Students who Fail(SGPA 0.00) }--->\t\t\t\t      |\n", cf);
                printf("&=====================================================================================================================&");
                printf("\n\n\n\n\n");
                /* F Category end */
                /*         Code End */
            }


            //Code for second semester end





int main()
{
    int semester_number;
    /*        Heading Start   */
                    printf("\n");
                    printf("\t\t\t\t\t&-------------------------------------&\n");
                    printf("\t\t\t\t\t|  Daffodil International University  |\n");
                    printf("\t\t\t\t\t|      Result Generating System       |\n");
                    printf("\t\t\t\t\t&-------------------------------------&\n");
    /*         Heading End */

    while(1)
    {
        printf("Give Semester Number: ");
        scanf("%d", &semester_number);
        if(semester_number == 1)
        {
            first();
            break;
        }
        else if(semester_number == 2)
        {
            second();
            break;
        }
        else
        {
            printf("\t\tSorry! Invalid input.\n");
            printf("\t\tFirst semester ---->>  1\n");
            printf("\t\tSecond semester ---->>  2\n");
            printf("\t\tWe are not able to Calculate %d semester result.\n", semester_number);
            printf("\n");
            continue;
        }
    }

    /*        Ending Start   */
                    printf("\n");
                    printf("\t\t\t\t\t&-------------------------------------&\n");
                    printf("\t\t\t\t\t|   Thank You For Using Our System.   |\n");
                    printf("\t\t\t\t\t|           Have A Good Day.          |\n");
                    printf("\t\t\t\t\t&-------------------------------------&\n");
    /*         Ending End */
    return 0;
}

