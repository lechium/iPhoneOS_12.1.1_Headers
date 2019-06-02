/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSReportItem : NSObject <NSCopying>
+(id)sum:(id)arg1 ;
+(id)median:(id)arg1 ;
+(id)mean:(id)arg1 ;
+(id)multiply:(id)arg1 withScalar:(double)arg2 ;
+(id)midrange:(id)arg1 ;
-(id)sum:(id)arg1 ;
-(void)add:(id)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 copyIfSameType:(BOOL)arg2 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
-(id)scalarProduct:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

