/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSMutableDictionary, NSString;

@interface DEDExtensionIdentifierManager : NSObject <NSSecureCoding, DEDSecureArchiving> {

	NSMutableDictionary* _identifierTable;

}

@property (nonatomic,retain) NSMutableDictionary * identifierTable;              //@synthesize identifierTable=_identifierTable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)archivedClasses;
+(BOOL)supportsSecureCoding;
+(id)log;
-(id)allIdentifiers;
-(BOOL)isKnownIdentifier:(id)arg1 ;
-(id)identifierForExtensionIdentifier:(id)arg1 ;
-(id)knownIdentifiersForExtensionIdentifier:(id)arg1 ;
-(void)revokeIdentifier:(id)arg1 ;
-(id)initWithExtensionIdentifiers:(id)arg1 ;
-(void)setIdentifierTable:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierTable;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
@end
