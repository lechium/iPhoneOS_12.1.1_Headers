/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSReading/TSKAccessControllerDelegate.h>
#import <TSReading/TSKModel.h>
#import <TSReading/TSKSearchTargetProvider.h>

@protocol TSKUndoRedoState, OS_dispatch_queue, TSKSearchReference;
@class TSKAccessController, TSKChangeNotifier, TSKPasteboardController, TSKAnnotationAuthorStorage, NSObject, NSMutableArray, NSLocale, NSDictionary, TSKDocumentSupport, TSSTheme, TSSStylesheet, NSString;

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel, TSKSearchTargetProvider> {

	TSKAccessController* _accessController;
	TSKChangeNotifier* _changeNotifier;
	BOOL _isFindActive;
	TSKPasteboardController* _pasteboardController;
	id<TSKUndoRedoState> _undoRedoState;
	TSKAnnotationAuthorStorage* _annotationAuthorStorage;
	NSObject*<OS_dispatch_queue> _iCloudTeardownStackQueue;
	NSMutableArray* _iCloudTeardownStack;
	BOOL _isBeingLocalized;
	NSLocale* _locale;
	NSObject*<TSKSearchReference> _activeSearchReference;
	NSDictionary* _searchReferencesToHighlight;
	TSKDocumentSupport* _documentSupport;

}

@property (nonatomic,readonly) UIViewController*<TSKDocumentViewController> viewController; 
@property (nonatomic,retain) TSSTheme * theme; 
@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,retain) NSLocale * locale;                                                          //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) TSKPasteboardController * pasteboardController;                             //@synthesize pasteboardController=_pasteboardController - In the implementation block
@property (nonatomic,readonly) TSKDocumentSupport * documentSupport;                                     //@synthesize documentSupport=_documentSupport - In the implementation block
@property (nonatomic,readonly) TSKAccessController * accessController;                                   //@synthesize accessController=_accessController - In the implementation block
@property (nonatomic,readonly) TSKChangeNotifier * changeNotifier;                                       //@synthesize changeNotifier=_changeNotifier - In the implementation block
@property (nonatomic,readonly) unsigned long long applicationType; 
@property (assign,getter=isFindActive,nonatomic) BOOL findActive;                                        //@synthesize isFindActive=_isFindActive - In the implementation block
@property (nonatomic,readonly) NSString * creationLanguage; 
@property (nonatomic,readonly) unsigned long long writingDirection; 
@property (nonatomic,retain) id<TSKUndoRedoState> undoRedoState;                                         //@synthesize undoRedoState=_undoRedoState - In the implementation block
@property (nonatomic,retain) TSKAnnotationAuthorStorage * annotationAuthorStorage;                       //@synthesize annotationAuthorStorage=_annotationAuthorStorage - In the implementation block
@property (nonatomic,readonly) BOOL isBeingLocalized;                                                    //@synthesize isBeingLocalized=_isBeingLocalized - In the implementation block
@property (nonatomic,retain) NSObject*<TSKSearchReference> activeSearchReference;                        //@synthesize activeSearchReference=_activeSearchReference - In the implementation block
@property (nonatomic,retain) NSDictionary * searchReferencesToHighlight;                                 //@synthesize searchReferencesToHighlight=_searchReferencesToHighlight - In the implementation block
@property (nonatomic,readonly) BOOL hasICloudConflict; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)commandControllerClass;
-(TSSTheme *)theme;
-(id)additionalDocumentPropertiesForWrite;
-(void)coalesceChanges:(id)arg1 ;
-(id)modelEnumerator;
-(id)modelEnumeratorForObjectsPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)arg1 ;
-(void)withRootSearchTargetAtIndex:(unsigned long long)arg1 executeBlock:(/*^block*/id)arg2 ;
-(unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)arg1 forString:(id)arg2 options:(unsigned long long)arg3 inDirection:(unsigned long long)arg4 ;
-(id)dataFromDocumentCachePath:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atDocumentCachePath:(id)arg2 ;
-(CGImageSourceRef)newImageSourceForDocumentCachePath:(id)arg1 ;
-(id)uniqueDocumentCachePathForProposedPath:(id)arg1 ;
-(void)changeDocumentCacheFileProtection:(id)arg1 ;
-(BOOL)documentCacheHasAtMostFileProtection:(id)arg1 ;
-(void)didSaveWithEncryptionChange;
-(void)documentDidLoad;
-(NSString *)creationLanguage;
-(BOOL)isDirectionRightToLeft;
-(BOOL)documentDisallowsHighlightsOnStorage:(id)arg1 ;
-(id)modelEnumeratorWithFlags:(unsigned long long)arg1 ;
-(id)modelEnumeratorForObjectsOfClass:(Class)arg1 ;
-(id)modelEnumeratorForObjectsConformingToProtocol:(id)arg1 ;
-(id)modelEnumeratorForObjectsRespondingToSelector:(SEL)arg1 ;
-(void)markAsModifiedIfLocaleIsOutOfDate;
-(id)commandForPropagatingPresetChangeCommand:(id)arg1 alwaysPreserveAppearance:(BOOL)arg2 ;
-(long long)addObserverForICloudTeardownWithBlock:(/*^block*/id)arg1 ;
-(void)removeICloudTeardownObserver:(long long)arg1 ;
-(void)notifyICloudTeardownObservers;
-(BOOL)hasICloudTeardownObserver;
-(BOOL)hasICloudConflict;
-(void)updateForNonCommandChangesWithWriteLock:(id)arg1 ;
-(TSKAccessController *)accessController;
-(TSKChangeNotifier *)changeNotifier;
-(TSKPasteboardController *)pasteboardController;
-(void)setPasteboardController:(TSKPasteboardController *)arg1 ;
-(BOOL)isFindActive;
-(void)setFindActive:(BOOL)arg1 ;
-(id<TSKUndoRedoState>)undoRedoState;
-(void)setUndoRedoState:(id<TSKUndoRedoState>)arg1 ;
-(TSKAnnotationAuthorStorage *)annotationAuthorStorage;
-(void)setAnnotationAuthorStorage:(TSKAnnotationAuthorStorage *)arg1 ;
-(BOOL)isBeingLocalized;
-(NSObject*<TSKSearchReference>)activeSearchReference;
-(void)setActiveSearchReference:(NSObject*<TSKSearchReference>)arg1 ;
-(NSDictionary *)searchReferencesToHighlight;
-(void)setSearchReferencesToHighlight:(NSDictionary *)arg1 ;
-(TSKDocumentSupport *)documentSupport;
-(TSSStylesheet *)stylesheet;
-(void)setTheme:(TSSTheme *)arg1 ;
-(void)setThemeForTemplateImport:(id)arg1 ;
-(void)enumerateStyleClientsUsingBlock:(/*^block*/id)arg1 ;
-(id)changeSessionManagerForModel:(id)arg1 ;
-(BOOL)useLigatures;
-(BOOL)shouldHyphenate;
-(CFLocaleRef)hyphenationLocale;
-(id)documentFonts;
-(id)changeVisibility;
-(id)unavailableDocumentFonts;
-(void)dealloc;
-(UIViewController*<TSKDocumentViewController>)viewController;
-(id)initWithContext:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(unsigned long long)writingDirection;
-(NSLocale *)locale;
-(unsigned long long)applicationType;
@end

