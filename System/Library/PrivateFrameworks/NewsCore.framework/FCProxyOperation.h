/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCOperation;

@interface FCProxyOperation : FCOperation {

	FCOperation* _underlyingOperation;

}

@property (nonatomic,retain) FCOperation * underlyingOperation;              //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
+(id)proxyForOperation:(id)arg1 ;
+(void)initialize;
-(void)setUnderlyingOperation:(FCOperation *)arg1 ;
-(FCOperation *)underlyingOperation;
-(void)performOperation;
-(void)setRelativePriority:(long long)arg1 ;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)_revisitRelativePriority;
-(void)_revisitQualityOfService;
-(unsigned long long)propertiesInheritedByChildOperations;
-(void)setQualityOfService:(long long)arg1 ;
@end

