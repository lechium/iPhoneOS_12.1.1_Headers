/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMLockFile : NSObject {

	int _fd;
	BOOL _locked;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL locked;                  //@synthesize locked=_locked - In the implementation block
+(id)iTunesSyncLockFile;
+(id)iTunesSyncLockFilePath;
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)locked;
-(void)dealloc;
-(NSString *)path;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
@end
