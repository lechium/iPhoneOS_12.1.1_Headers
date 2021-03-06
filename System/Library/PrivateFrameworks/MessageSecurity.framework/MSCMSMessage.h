/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MSOID, NSData;


@protocol MSCMSMessage <MSMessage>
@property (readonly) MSOID * type; 
@property (nonatomic,retain) NSData * dataContent; 
@property (retain) id<MSCMSMessage> embeddedContent; 
@property (retain) MSOID * contentType; 
@required
-(MSOID *)contentType;
-(void)setContentType:(id)arg1;
-(void)setDataContent:(id)arg1;
-(NSData *)dataContent;
-(void)setEmbeddedContent:(id)arg1;
-(id<MSCMSMessage>)embeddedContent;
-(MSOID *)type;

@end

