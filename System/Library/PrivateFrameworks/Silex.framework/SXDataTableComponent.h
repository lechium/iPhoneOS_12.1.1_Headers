/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class SXDataRecordStore, NSString, SXJSONArray;

@interface SXDataTableComponent : SXComponent

@property (nonatomic,readonly) SXDataRecordStore * data; 
@property (nonatomic,readonly) NSString * tableStyle; 
@property (nonatomic,readonly) SXJSONArray * sortBy; 
@property (nonatomic,readonly) unsigned long long dataOrientation; 
@property (nonatomic,readonly) BOOL showDescriptorLabels; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(BOOL)showDescriptorLabels;
-(unsigned long long)dataOrientation;
-(SXJSONArray *)sortBy;
-(NSString *)tableStyle;
-(SXDataRecordStore *)data;
-(unsigned long long)dataOrientationWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)showDescriptorLabelsWithValue:(id)arg1 withType:(int)arg2 ;
@end

