/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface AFUIDebugLog : NSObject {

	NSData* _data;
	NSString* _mimeType;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSData * data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
+(id)logWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
-(id)initWithData:(id)arg1 mimeType:(id)arg2 name:(id)arg3 attemptCompression:(BOOL)arg4 ;
-(NSString *)name;
-(NSData *)data;
-(NSString *)mimeType;
@end

