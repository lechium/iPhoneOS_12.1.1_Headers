/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CPInterval : NSObject {

	double left;
	double right;

}
-(BOOL)contains:(id)arg1 ;
-(BOOL)intersects:(id)arg1 ;
-(id)initLeft:(double)arg1 right:(double)arg2 ;
-(void)add:(id)arg1 ;
-(double)left;
-(double)right;
@end
