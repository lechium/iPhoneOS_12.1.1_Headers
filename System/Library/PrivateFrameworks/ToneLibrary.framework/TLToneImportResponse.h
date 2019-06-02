/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TLToneImportResponse : NSObject {

	long long _statusCode;
	NSString* _toneIdentifier;

}

@property (nonatomic,readonly) long long statusCode;                   //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;              //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
-(id)initWithStatusCode:(long long)arg1 toneIdentifier:(id)arg2 ;
-(NSString *)toneIdentifier;
-(id)description;
-(long long)statusCode;
@end

