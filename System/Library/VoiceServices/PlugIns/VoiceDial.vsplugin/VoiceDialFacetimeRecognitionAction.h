/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VSRecognitionURLAction.h>

@class NSString;

@interface VoiceDialFacetimeRecognitionAction : VSRecognitionURLAction {

	NSString* _contactInfo;
	int _abID;

}
-(id)initWithContactInfo:(id)arg1 uid:(int)arg2 ;
-(id)perform;
@end
