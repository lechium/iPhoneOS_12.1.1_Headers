/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol CRCommand <NSObject,NSCopying>
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@required
-(unsigned long long)commandDirection;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(id)arg1;
-(void)setCommandDirection:(unsigned long long)arg1;

@end

