/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFUIRequestOptions;

@interface AFUITestInput : NSObject {

	AFUIRequestOptions* _requestOptions;

}

@property (nonatomic,readonly) AFUIRequestOptions * requestOptions;              //@synthesize requestOptions=_requestOptions - In the implementation block
+(id)_baseRequestOptions;
-(AFUIRequestOptions *)requestOptions;
-(id)_initWithRequestOptions:(id)arg1 ;
-(id)initWithRecordedSpeechURL:(id)arg1 ;
-(id)initWithText:(id)arg1 ;
@end

