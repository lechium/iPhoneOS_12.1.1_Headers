/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {

	unsigned long long _requestID;
	NSArray* _photoSettingsArray;
	/*^block*/id _completionHandler;
	BOOL _completed;

}

@property (readonly) unsigned long long requestID; 
@property (readonly) NSArray * photoSettingsArray; 
@property (readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,getter=isCompleted,nonatomic) BOOL completed;              //@synthesize completed=_completed - In the implementation block
+(id)preparedPhotoSettingsArrayRequestWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_initWithArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setRequestID:(unsigned long long)arg1 ;
-(NSArray *)photoSettingsArray;
-(unsigned long long)requestID;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
@end

