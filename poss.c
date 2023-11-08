#include <stdio.h>
int main(){
	for (int a=1;a<=8;a++){
		for (int b=1;b<=8;b++){
			for (int c=1; c<=8;c++){
		    	for (int d=1;d<=8;d++){
					for (int e=1;e<=8;e++){
						for (int f=1;f<=8;f++){
							for (int g=1;g<=8;g++){
								for (int h=1;h<=8;h++){
									if (a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h){
										if (b!=c && b!=d && b!=e && b!=f && b!=g && b!=h){
											if (c!=d && c!=e && c!=f && c!=g && c!=h){
												if (d!=e && d!=f && d!=g && d!=h){
													if (e!=f && e!=g && e!=h){
														if (f!=g && f!=h){
													   		if (g!=h){
													   			printf("%d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h);
													   		}
													    }
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
