/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol WebItemProviderRegistrar <NSObject>
@property (nonatomic,readonly) id<NSItemProviderWriting> representingObjectForClient; 
@property (nonatomic,readonly) NSString * typeIdentifierForClient; 
@property (nonatomic,readonly) NSData * dataForClient; 
@optional
-(id<NSItemProviderWriting>)representingObjectForClient;
-(NSString *)typeIdentifierForClient;
-(NSData *)dataForClient;

@required
-(void)registerItemProvider:(id)arg1;

@end

