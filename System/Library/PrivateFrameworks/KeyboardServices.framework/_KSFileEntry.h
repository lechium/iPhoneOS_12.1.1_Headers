/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary, NSMutableArray, NSData;

@interface _KSFileEntry : NSObject <NSSecureCoding> {

	NSString* _name;
	NSMutableDictionary* _extendedAttributes;
	NSMutableArray* _tempFiles;
	NSMutableArray* _fileArray;
	NSData* _fileBlob;

}

@property (nonatomic,retain,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * extendedAttributes;              //@synthesize extendedAttributes=_extendedAttributes - In the implementation block
+(id)entryWithSerialisedDataAtURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)consistencyCheck;
-(void)performOnEverything:(/*^block*/id)arg1 ;
-(id)temporaryFileNameForType:(id)arg1 ;
-(id)serialiseToTemporaryFile;
-(unsigned long long)addBlobToFile:(id)arg1 ;
-(void)loadAttributesFromURL:(id)arg1 ;
-(void)saveAttributesToURL:(id)arg1 ;
-(void)restoreToPath:(id)arg1 ;
-(NSMutableDictionary *)extendedAttributes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithName:(id)arg1 ;
@end

