/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADRelativeRect : NSObject <NSCopying> {

	float mLeft;
	float mTop;
	float mRight;
	float mBottom;

}
-(float)left;
-(float)top;
-(float)right;
-(float)bottom;
-(id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4 ;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setBottom:(float)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLeft:(float)arg1 ;
@end
