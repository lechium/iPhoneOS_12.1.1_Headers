/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKInstalledSystemApplicationsChangeObserver.h>

@class NSArray, NSIndexSet, NSString;

@interface _SlotDescriptor : NSObject <NTKInstalledSystemApplicationsChangeObserver> {

	long long _family;
	NSArray* _typesRankedList;
	NSIndexSet* _allowedTypes;
	NSIndexSet* _possibleTypes;

}

@property (nonatomic,readonly) long long family;                        //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSArray * typesRankedList;               //@synthesize typesRankedList=_typesRankedList - In the implementation block
@property (nonatomic,readonly) NSIndexSet * allowedTypes;               //@synthesize allowedTypes=_allowedTypes - In the implementation block
@property (nonatomic,readonly) NSIndexSet * possibleTypes;              //@synthesize possibleTypes=_possibleTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3 ;
-(long long)family;
-(NSIndexSet *)allowedTypes;
-(void)installedSystemApplicationsDidChange;
-(NSIndexSet *)possibleTypes;
-(NSArray *)typesRankedList;
-(BOOL)allowsType:(unsigned long long)arg1 ;
-(BOOL)supportsType:(unsigned long long)arg1 ;
@end

