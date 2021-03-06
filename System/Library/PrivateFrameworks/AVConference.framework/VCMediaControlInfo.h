/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMediaControlInfoDelegate;
#import <AVConference/AVConference-Structs.h>
@interface VCMediaControlInfo : NSObject {

	unsigned char _bitmap;
	unsigned long long _serializedSize;
	id<VCMediaControlInfoDelegate> _delegate;

}

@property (readonly) unsigned long long serializedSize;                  //@synthesize serializedSize=_serializedSize - In the implementation block
@property (assign) id<VCMediaControlInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dispose;
-(id)initWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC57*)arg3 ;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC57*)arg3 ;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(unsigned long long)serializedSize;
-(void)setDelegate:(id<VCMediaControlInfoDelegate>)arg1 ;
-(id<VCMediaControlInfoDelegate>)delegate;
-(void)invalidate;
@end

