/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDDataLabel, CHDMarker, OADGraphicProperties, NSString;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {

	CHDDataLabel* mDataLabel;
	CHDMarker* mMarker;
	unsigned long long mDataValueIndex;
	OADGraphicProperties* mGraphicProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataValueProperties;
-(id)graphicProperties;
-(id)marker;
-(void)setDataValueIndex:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setDataLabel:(id)arg1 ;
-(id)shallowCopyWithIndex:(unsigned long long)arg1 ;
-(id)dataLabel;
-(unsigned long long)dataValueIndex;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(long long)key;
@end

