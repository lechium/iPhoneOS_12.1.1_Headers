/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSURLCompletionMatch.h>

@class NSURL, NSString;

@interface WBSTabCompletionMatch : WBSURLCompletionMatch {

	NSURL* _url;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(long long)_matchLocationForString:(id)arg1 url:(id)arg2 title:(id)arg3 ;
-(id)originalURLString;
-(id)userVisibleURLString;
-(id)initWithUserTypedString:(id)arg1 url:(id)arg2 title:(id)arg3 ;
-(NSString *)title;
-(NSURL *)url;
@end

