/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRecognitionResultHandler.h>

@class VoiceDialNameDataSource, NSString;

@interface VoiceDialResultHandler : NSObject <VSRecognitionResultHandler> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)actionForRecognitionResults:(id)arg1 ;
-(void*)_addressBook;
-(id)_nameSource;
-(id)_phoneticNames:(id)arg1 fromDictionary:(id)arg2 ;
@end

