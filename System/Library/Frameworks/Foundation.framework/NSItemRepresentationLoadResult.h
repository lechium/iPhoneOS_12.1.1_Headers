/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSSecurityScopedURLWrapper, NSError, NSString;

@interface NSItemRepresentationLoadResult : NSObject <NSCopying> {

	BOOL _wasOpenedInPlace;
	NSData* _data;
	NSSecurityScopedURLWrapper* _urlWrapper;
	/*^block*/id _cleanupHandler;
	NSError* _error;
	NSString* _archivedObjectClassName;

}

@property (nonatomic,copy) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSSecurityScopedURLWrapper * urlWrapper;              //@synthesize urlWrapper=_urlWrapper - In the implementation block
@property (nonatomic,copy) id cleanupHandler;                                      //@synthesize cleanupHandler=_cleanupHandler - In the implementation block
@property (nonatomic,copy) NSError * error;                                        //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * archivedObjectClassName;                     //@synthesize archivedObjectClassName=_archivedObjectClassName - In the implementation block
@property (assign,nonatomic) BOOL wasOpenedInPlace;                                //@synthesize wasOpenedInPlace=_wasOpenedInPlace - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(NSSecurityScopedURLWrapper *)urlWrapper;
-(BOOL)wasOpenedInPlace;
-(void)setArchivedObjectClassName:(NSString *)arg1 ;
-(NSString *)archivedObjectClassName;
-(void)setUrlWrapper:(NSSecurityScopedURLWrapper *)arg1 ;
-(void)setWasOpenedInPlace:(BOOL)arg1 ;
-(id)copyWithData:(id)arg1 urlWrapper:(id)arg2 cleanupHandler:(/*^block*/id)arg3 error:(id)arg4 ;
-(id)cleanupHandler;
-(void)setCleanupHandler:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

