/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileReadingClaim : NSFileAccessClaim {

	NSURL* _url;
	BOOL _urlDidChange;
	unsigned long long _options;
	NSFileAccessNode* _location;
	NSFileAccessNode* _rootNode;
	long long _linkResolutionCount;

}
+(BOOL)supportsSecureCoding;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(id)allURLs;
-(void)granted;
-(void)invokeClaimer;
-(BOOL)shouldCancelInsteadOfWaiting;
-(BOOL)blocksClaim:(id)arg1 ;
-(void)devalueSelf;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(void)resolveURLThenMaybeContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 claimer:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

