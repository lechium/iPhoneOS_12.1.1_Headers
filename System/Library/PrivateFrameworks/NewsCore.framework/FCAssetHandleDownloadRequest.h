/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationCanceling.h>
#import <libobjc.A.dylib/FCOperationPrioritizing.h>

@class NSString;

@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing> {

	long long _relativePriority;
	/*^block*/id _cancelHandler;
	/*^block*/id _priorityHandler;

}

@property (nonatomic,copy) id cancelHandler;                          //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,copy) id priorityHandler;                        //@synthesize priorityHandler=_priorityHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long relativePriority;              //@synthesize relativePriority=_relativePriority - In the implementation block
-(long long)relativePriority;
-(void)setRelativePriority:(long long)arg1 ;
-(void)setPriorityHandler:(id)arg1 ;
-(id)priorityHandler;
-(void)cancel;
-(void)setCancelHandler:(id)arg1 ;
-(id)cancelHandler;
@end

