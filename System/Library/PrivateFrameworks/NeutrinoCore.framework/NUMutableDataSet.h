/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet

@property (nonatomic,readonly) long long capacity; 
-(DataSet*)_data;
-(void)appendDataSet:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(long long)arg1 ;
-(void)addValue:(double)arg1 ;
-(long long)capacity;
@end

