/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:51 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray, NSString, TDSchemaDefinition, NSSet;

@interface TDSchemaPartDefinition : NSManagedObject {

	CUIImage* previewImage;
	NSArray* renditions;
	NSArray* renditionGroups;
	unsigned long long partFeatures;

}

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSString * widgetID; 
@property (nonatomic,retain) TDSchemaDefinition * element; 
@property (nonatomic,retain) NSSet * productions; 
@property (nonatomic,retain) CUIImage * previewImage; 
@property (nonatomic,copy) NSArray * renditions; 
@property (nonatomic,retain) NSArray * renditionGroups; 
@property (assign,nonatomic) unsigned long long partFeatures; 
-(NSArray *)renditions;
-(void)setRenditions:(NSArray *)arg1 ;
-(unsigned long long)partFeatures;
-(void)didTurnIntoFault;
-(void)setPreviewImage:(CUIImage *)arg1 ;
-(CUIImage *)previewImage;
-(long long)elementID;
-(long long)partID;
-(void)setRenditionGroups:(NSArray *)arg1 ;
-(id)_schema;
-(const SCD_Struct_TD1*)cuiPartDefinition;
-(void)setPartFeatures:(unsigned long long)arg1 ;
-(void)updateDerivedRenditionData;
-(id)bestPreviewRendition;
-(id)validStatesWithDocument:(id)arg1 ;
-(long long)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1 ;
-(NSArray *)renditionGroups;
-(void)dealloc;
-(id)displayName;
@end

