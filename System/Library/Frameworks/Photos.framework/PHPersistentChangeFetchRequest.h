/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHPersistentChangeToken;

@interface PHPersistentChangeFetchRequest : NSObject {

	PHPersistentChangeToken* _token;
	unsigned long long _maximumChangeThreshold;

}

@property (nonatomic,copy) PHPersistentChangeToken * token;                          //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long maximumChangeThreshold;              //@synthesize maximumChangeThreshold=_maximumChangeThreshold - In the implementation block
-(unsigned long long)maximumChangeThreshold;
-(void)setMaximumChangeThreshold:(unsigned long long)arg1 ;
-(PHPersistentChangeToken *)token;
-(void)setToken:(PHPersistentChangeToken *)arg1 ;
@end

