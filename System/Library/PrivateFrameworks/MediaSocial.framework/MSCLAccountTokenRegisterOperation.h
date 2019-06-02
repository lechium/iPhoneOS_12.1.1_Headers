/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class MSCLAccount, SKUIMediaSocialAuthor, SSVMediaSocialPostExternalDestination, NSLock;

@interface MSCLAccountTokenRegisterOperation : SSVComplexOperation {

	MSCLAccount* _account;
	SKUIMediaSocialAuthor* _author;
	SSVMediaSocialPostExternalDestination* _externalDestination;
	NSLock* _lock;
	/*^block*/id _outputBlock;

}

@property (copy) id outputBlock; 
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)_requestWithURL:(id)arg1 ;
-(id)_queryItems;
-(id)_componentsWithURL:(id)arg1 ;
-(id)initWithAuthor:(id)arg1 externalDestination:(id)arg2 account:(id)arg3 ;
-(void)main;
@end
