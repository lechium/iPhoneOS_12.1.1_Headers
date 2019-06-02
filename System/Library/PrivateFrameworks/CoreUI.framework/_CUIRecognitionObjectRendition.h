/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/_CUIRawDataRendition.h>

@interface _CUIRecognitionObjectRendition : _CUIRawDataRendition {

	int _objectVersion;
	SCD_Struct_CS7 _transformation;

}
-(int)objectVersion;
-(SCD_Struct_CS7)transformation;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(void)_initalizeMetadataFromCSIData:(const csiheader*)arg1 ;
@end

