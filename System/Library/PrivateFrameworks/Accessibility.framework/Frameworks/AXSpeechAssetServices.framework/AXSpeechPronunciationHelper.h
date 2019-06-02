/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpeechAssetServices/AXUIClientDelegate.h>

@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate> {

	BOOL _inSession;
	/*^block*/id _resultCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)_speechAssetUpdaterClient;
-(BOOL)supportsPronunciationSessions;
-(void)startPronunciationSession:(id)arg1 resultCallback:(/*^block*/id)arg2 ;
-(void)stopPronunciationSession;
-(void)cancelPronunciationSession;
-(void)dealloc;
-(float)audioLevel;
@end
