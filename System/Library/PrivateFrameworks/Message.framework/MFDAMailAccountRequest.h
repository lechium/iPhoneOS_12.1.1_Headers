/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFDAMailAccountRequest
@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
@required
-(BOOL)isUserRequested;
-(id)deferredOperation;
-(BOOL)shouldSend;
-(unsigned long long)generationNumber;

@end

