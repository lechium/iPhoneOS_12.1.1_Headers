/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSSiteMetadataRequest.h>
#import <libobjc.A.dylib/WBSIconRequest.h>

@class NSString;

@interface WBSTouchIconRequest : WBSSiteMetadataRequest <WBSIconRequest> {

	BOOL _iconGenerationEnabled;
	BOOL _iconDownloadingEnabled;
	NSString* _monogramTitle;
	CGSize _minimumIconSize;
	CGSize _maximumIconSize;

}

@property (getter=isIconGenerationEnabled,nonatomic,readonly) BOOL iconGenerationEnabled;                //@synthesize iconGenerationEnabled=_iconGenerationEnabled - In the implementation block
@property (getter=isIconDownloadingEnabled,nonatomic,readonly) BOOL iconDownloadingEnabled;              //@synthesize iconDownloadingEnabled=_iconDownloadingEnabled - In the implementation block
@property (nonatomic,readonly) CGSize minimumIconSize;                                                   //@synthesize minimumIconSize=_minimumIconSize - In the implementation block
@property (nonatomic,readonly) CGSize maximumIconSize;                                                   //@synthesize maximumIconSize=_maximumIconSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * monogramTitle;                                            //@synthesize monogramTitle=_monogramTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize sizeForDrawing; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier; 
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
+(id)requestWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 iconDownloadingEnabled:(BOOL)arg6 ;
-(CGSize)sizeForDrawing;
-(BOOL)isIconGenerationEnabled;
-(NSString *)monogramTitle;
-(BOOL)isIconDownloadingEnabled;
-(CGSize)maximumIconSize;
-(CGSize)minimumIconSize;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 ;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 iconDownloadingEnabled:(BOOL)arg6 ;
-(id)initWithTitle:(id)arg1 url:(id)arg2 minimumIconSize:(CGSize)arg3 maximumIconSize:(CGSize)arg4 iconGenerationEnabled:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueIdentifier;
@end

