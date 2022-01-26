#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>

int page1()
{
	int quantity,dish,q1;
	label :
	printf("\t\t\tPAGE no.1");
	printf("\nNon-VEG Starter's:- \n\n\n\t\t\t\tFULL\tHALF");
	printf("\n1. TANDOORI CHICKEN\t\t360\t200");
	printf("\n2. AFGANI CHICKEN\t\t400\t220");
	printf("\n3. CHICKEN TANGRI\t\t250\t130");
	printf("\n4. AFGANI MALAI TIKKA\t\t280\t140");
	printf("\n5. CHICKEN MALAI TIKKA\t\t230\t120");
	printf("\n6. CHICKEN HARIYANA TIKKA\t250\t130");
	printf("\n7. KALMI KABAB\t\t\t250\t130");
	printf("\n8. MUTTON KABAB\t\t\t250\t130");
	printf("\n9. MUTTON SEEKH KABAB\t\t300\t170");
	printf("\n10. MUTTON BARRA\t\t480\t240");
	printf("\n11. CHICKEN SEEKH KABAB\t\t230\t120");
	printf("\n12. FISH PAMPHLIT\t\t330\t---");
	printf("\n13. FISH TIKKA\t\t\t280\t---");
	scanf("%d",&dish);

	switch(dish)
	{
		case 1 : printf("TANDOORI CHICKEN");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}

		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	     case 2 : printf("AFGANI CHICKEN");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 3 : printf("CHICKEN TANGRI");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 4 : printf("AFGANI MALAI TIKKA");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 5 : printf("CHICKEN MALAI TIKKA");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 6 : printf("CHICKEN HARIYANA TIKKA");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 7 : printf("KALMI KABAB");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 8 : printf("MUTTON KABAB");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 9 : printf("MUTTON SEEKH KABAB");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 10 : printf("MUTTON BARRA");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 11 : printf("CHICKEN SEEKH KABAB");
		printf("\n1.Full\n2.Half\n3.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 12 : printf("FISH PAMPHLIT");
		printf("\n1.Full\n2.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;
	    case 13: printf("FISH TIKKA");
		printf("\n1.Full\n2.Exit\n");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		break;

	    default : printf("======");
	    break;
	}
	return(dish);
}
int page2()
{
	int quantity,dish,q1;
	label :
	printf("\t\t\tPAGE NO.2");
	printf("\nBREAD's:- \n");
	printf("\n1. TANDOORI ROTI\t\t\t15");
	printf("\n2. BUTTER ROTI\t\t\t\t20");
	printf("\n3. LACHHA PARANTHA\t\t\t40");
	printf("\n4. BUTTER NAAN\t\t\t\t45");
	printf("\n5. PLAIN NAAN\t\t\t\t35");
	printf("\n6. KEEMA NAAN\t\t\t\t70");
	printf("\n7. GARLIC NAAN\t\t\t\t50");
	printf("\n8. ROOMALI ROTI\t\t\t\t25");
	printf("\n9. PANEER PARANTHA\t\t\t60");
	printf("\n10. ALOO PARANTHA\t\t\t50");
	printf("\n11. ONION PARANTHA\t\t\t45");
	printf("\n12. KEEMA PARANTHA\t\t\t80");
	printf("\n13. MIRACH PARANTHA\t\t\t55");
	printf("\nPAGE NO.2\n");
	scanf("%d",&dish);
	

	switch(dish)
	{
		case 1 : printf("TANDOORI ROTI");
	        printf("\n1.CONFIRM\n2.Exit"); 	        
	        
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;
	        
	        
	     case 2 : printf("BUTTER ROTI");
	        printf("\n1.CONFIRM\n2.Exit");
	       
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	         printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break; 
	        
	        
	    case 3 : printf("LACHHA PARANTHA");
	       printf("\n1.CONFIRM\n2.Exit"); 	
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;


	    case 4 : printf("BUTTER NAAN");
		printf("\n1.CONFIRM\n2.Exit");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;
	    case 5 : printf("PLAIN NAAN");
		printf("\n1.CONFIRM\n2.Exit");
		printf("\n Please Enter the Quantity:-");
		scanf("%d",&quantity);
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		break;


	    case 6 : printf("KEEMA NAAN");
		printf("\n1.CONFIRM\n2.Exit");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;


	    case 7 : printf("GARLIC NAAN");
		printf("\n1.CONFIRM\n2.Exit");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;


	    case 8 : printf("ROOMALI ROTI");
		printf("\n1.CONFIRM\n2.Exit");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;


	    case 9 : printf("PANEER PARANTHA");
		printf("\n1.CONFIRM\n2.Exit");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;


	    case 10 : printf("ALOO PARANTHA");
		printf("\n1.CONFIRM\n2.Exit");
		scanf("%d",&q1);
		if(q1>2)
		{
		    goto label;
		}
		printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
		break;

	        
	    case 11 : printf("ONION PARANTHA");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 12 : printf("KEEMA PARANTHA");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 13: printf("MIRACH PARANTHA");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;   
	    
	    default : printf("======");
	    break;
	}
	return(dish);
}

int page3()
{
	int quantity,dish,q1;
	label :
	printf("\t\t\tPAGE NO.3");
	printf("\nPURE VEG:- \n");
	printf("\n1. DAL MAKHANI\t\t\t15");
	printf("\n2. DAL TADKA\t\t\t\t20");
	printf("\n3. SHAHI PANEER\t\t\t40");
	printf("\n4. KADAI PANEER\t\t\t\t45");
	printf("\n5. PANEER PASANDA \t\t\t\t35");
	printf("\n6. HANDI SPL. PANEER\t\t\t\t70");
	printf("\n7. MUTTER MUSHROOM\t\t\t\t50");
	printf("\n8. KADAI SOYA CHAP\t\t\t\t25");
	printf("\n9. TAWA SOYA CHAP\t\t\t60");
	printf("\n10. MIXED VEG\t\t\t50");
	printf("\n11. MALAI KOFTA\t\t\t45");
	printf("\n12. MUTTER PANEER\t\t\t80");
	printf("\n13. PANEER BUTTER MASALA\t\t\t55");
	printf("\n14. PANEER TIKKA MASALA\t\t\t55");
	printf("\n15. MASALA AALOO\t\t\t55");
	printf("\n16. JEERA AALOO\t\t\t55");
	printf("Enter you choice:---");
	scanf("%d",&dish);
	

	switch(dish)
	{
		case 1 : printf("DAL MAKHANI");
	        printf("\n1.CONFIRM\n2.Exit"); 	        
	        
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;
	        
	        
	     case 2 : printf("DAL TADKA");
	        printf("\n1.CONFIRM\n2.Exit");
	       
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	         printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break; 
	        
	        
	    case 3 : printf("SHAHI PANEER");
	       printf("\n1.CONFIRM\n2.Exit"); 	
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 4 : printf("KADAI PANEER");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	    case 5 : printf("PANEER PASANDA");
	        printf("\n1.CONFIRM\n2.Exit");
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        break; 
	        
	        
	    case 6 : printf("HANDI SPL. PANEER");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 7 : printf("MUTTER MUSHROOM");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;  
	        
	        
	    case 8 : printf("KADAI SOYA CHAP");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;  
	        
	        
	    case 9 : printf("TAWA SOYA CHAP");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 10 : printf("MIXED VEG");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 11 : printf("MALAI KOFTA");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 12 : printf("MUTTER PANEER");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	       scanf("%d",&quantity);
	        break;   
	        
	        
	    case 13: printf("PANEER BUTTER MASALA");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;   
	    
	    case 14: printf("PANEER TIKKA MASALA");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;
	        
        case 15: printf("MASALA AALOO");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;
	   
	   case 16: printf("JEERA AALOO");
	        printf("\n1.CONFIRM\n2.Exit");
	        scanf("%d",&q1);
	        if(q1>2)
	        {
	            goto label;
	        }
	        printf("\n Please Enter the Quantity:-");
	        scanf("%d",&quantity);
	        break;
	    default : printf("======");
	    break;
	}
 	return(dish);
}

void main()
{
	int a;
	clrscr();
	printf("\n\t\t\t Hello Welcome To Our Restaurant");
	printf("\n\t\t\t\t    Family Time");
	printf("\n--------------------------------------------------------------------------------");
	a=page1();
	printf("%d",a);
	getch();
}
