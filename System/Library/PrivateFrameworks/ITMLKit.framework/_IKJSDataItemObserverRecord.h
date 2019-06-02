/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKJSDataItemObserver;
#import <ITMLKit/ITMLKit-Structs.h>
@class NSString;

@interface _IKJSDataItemObserverRecord : NSObject {

	struct {
		BOOL hasDidChangePropertyPath;
		BOOL hasDidChangeSubPropertyPath;
	}  _observerFlags;
	BOOL _subscriptWildcard;
	id<IKJSDataItemObserver> _observer;
	NSString* _observerHash;
	NSString* _pathString;

}

@property (nonatomic,__weak,readonly) id<IKJSDataItemObserver> observer;                       //@synthesize observer=_observer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * observerHash;                                 //@synthesize observerHash=_observerHash - In the implementation block
@property (nonatomic,readonly) NSString * pathString;                                          //@synthesize pathString=_pathString - In the implementation block
@property (getter=isSubscriptWildcard,nonatomic,readonly) BOOL subscriptWildcard;              //@synthesize subscriptWildcard=_subscriptWildcard - In the implementation block
+(id)hashForObserver:(id)arg1 ;
-(BOOL)isSubscriptWildcard;
-(NSString *)pathString;
-(id)initWithObserver:(id)arg1 pathString:(id)arg2 subscriptWildcard:(BOOL)arg3 ;
-(BOOL)isAffectedByPropertyPathWithString:(id)arg1 ;
-(BOOL)isAffectedByPropertyPathWithString:(id)arg1 subscript:(long long)arg2 ;
-(NSString *)observerHash;
-(id<IKJSDataItemObserver>)observer;
@end

