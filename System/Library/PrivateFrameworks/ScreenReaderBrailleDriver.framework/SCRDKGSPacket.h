/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCRDKGSPacket : NSObject {

	unsigned char _command;
	unsigned char _subCommand;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char command;                 //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned char subCommand;              //@synthesize subCommand=_subCommand - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(unsigned char)command;
-(void)setCommand:(unsigned char)arg1 ;
-(unsigned char)subCommand;
-(void)setSubCommand:(unsigned char)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end
