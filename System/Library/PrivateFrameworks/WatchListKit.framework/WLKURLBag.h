/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSURLBag;

@interface WLKURLBag : NSObject {

	SSURLBag* _impl;

}
+(id)URLBagForContext:(id)arg1 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithURLBagContext:(id)arg1 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValueForKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)existingBagDictionary;
-(id)URLBagContext;
-(void)invalidate;
@end

