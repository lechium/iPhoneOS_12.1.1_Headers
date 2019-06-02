/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecordBuilder.h>

@class NSString;

@interface LSBundleRecordUpdater : LSRecordBuilder {

	LSContext* _context;
	BOOL _hasContext;
	unsigned _bundleID;
	LSBundleData _bundleData;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(BOOL)arg2 ;
-(void)parseSINFDictionary:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(void)parsePlaceholderMetadata:(id)arg1 ;
-(int)updateBundleRecord;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
@end

