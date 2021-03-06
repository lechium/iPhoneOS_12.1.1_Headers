/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying> {

	BOOL _allowsFallbackToExpiredStatus;
	BOOL _allowsFallbackToStatusNeedingReload;
	BOOL _shouldIgnoreCache;
	long long _maximumRetryCount;
	ICStoreRequestContext* _storeRequestContext;

}

@property (assign,nonatomic) BOOL allowsFallbackToExpiredStatus;                     //@synthesize allowsFallbackToExpiredStatus=_allowsFallbackToExpiredStatus - In the implementation block
@property (assign,nonatomic) BOOL allowsFallbackToStatusNeedingReload;               //@synthesize allowsFallbackToStatusNeedingReload=_allowsFallbackToStatusNeedingReload - In the implementation block
@property (assign,nonatomic) long long maximumRetryCount;                            //@synthesize maximumRetryCount=_maximumRetryCount - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                                 //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
-(BOOL)allowsFallbackToExpiredStatus;
-(BOOL)allowsFallbackToStatusNeedingReload;
-(id)initWithStoreRequestContext:(id)arg1 ;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(BOOL)shouldIgnoreCache;
-(void)setMaximumRetryCount:(long long)arg1 ;
-(void)setAllowsFallbackToExpiredStatus:(BOOL)arg1 ;
-(void)setAllowsFallbackToStatusNeedingReload:(BOOL)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(long long)maximumRetryCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

