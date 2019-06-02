/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SVVideoGravityProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * videoGravity; 
@property (nonatomic,copy,readonly) NSString * portraitVideoGravity; 
@property (nonatomic,copy,readonly) NSString * landscapeVideoGravity; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(NSString *)videoGravity;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(NSString *)portraitVideoGravity;
-(NSString *)landscapeVideoGravity;

@end

