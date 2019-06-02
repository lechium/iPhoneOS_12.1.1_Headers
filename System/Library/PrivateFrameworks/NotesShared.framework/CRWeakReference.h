/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRDataType.h>
#import <libobjc.A.dylib/CRCoding.h>

@class NSUUID, CRDocument, NSString;

@interface CRWeakReference : NSObject <CRDataType, CRCoding> {

	NSUUID* _identifier;
	CRDocument* _document;

}

@property (assign,nonatomic,__weak) CRDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 document:(id)arg2 ;
-(id)initWithContents:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)description;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)contents;
-(void)setDocument:(CRDocument *)arg1 ;
-(CRDocument *)document;
@end

