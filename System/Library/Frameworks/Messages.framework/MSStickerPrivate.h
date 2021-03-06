/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSString, NSData;


@protocol MSStickerPrivate <NSObject>
@property (nonatomic,readonly) NSURL * imageFileURL; 
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSData * data; 
@required
-(NSURL *)imageFileURL;
-(NSString *)localizedDescription;
-(NSData *)data;

@end

