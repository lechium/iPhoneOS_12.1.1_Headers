/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString;


@protocol SBSCarPlayApplicationIcon <NSObject>
@property (nonatomic,readonly) NSData * iconImageData; 
@property (nonatomic,readonly) double iconImageScale; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@required
-(double)iconImageScale;
-(NSString *)localizedDisplayName;
-(NSData *)iconImageData;

@end

