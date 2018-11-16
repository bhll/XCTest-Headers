//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSSet, XCElementSnapshot, XCUIRecorderNodeFinderMatch;

@interface XCUIRecorderNodeFinder : NSObject
{
    unsigned long long _state;
    NSSet *_descendantsWithTargetElementType;
    NSArray *_childrenWithTargetElementType;
    BOOL _allowDirectChildrenMatches;
    BOOL _shouldAttemptToUseIdentifier;
    BOOL _shouldAttemptToUsePlaceholderValue;
    BOOL _shouldAttemptToUseLabel;
    BOOL _shouldAttemptToUseTitle;
    BOOL _shouldAttemptToUseTruncatedValueString;
    BOOL _allowElementQueries;
    BOOL _excludeUnlessNecessary;
    NSMutableArray *_mutableFoundNodeMatches;
    NSMutableArray *_unprocessedContainsMatches;
    XCUIRecorderNodeFinderMatch *_ancestorNodeFinderMatch;
    unsigned long long _targetSnapshotIndex;
    XCElementSnapshot *_targetSnapshot;
    unsigned long long _language;
    unsigned long long _platform;
}

+ (id)nodeToFindElementForSnapshots:(id)arg1 language:(unsigned long long)arg2 platform:(unsigned long long)arg3;
+ (id)_nodeFindersForSnapshots:(id)arg1 ancestorMatch:(id)arg2 ancestorIndex:(unsigned long long)arg3 stopCombinatorialExpansionIndexes:(id)arg4 excludeUnlessNecessaryElementTypes:(id)arg5 language:(unsigned long long)arg6 platform:(unsigned long long)arg7;
+ (id)_excludeUnlessNecessaryElementTypesForPlatform:(unsigned long long)arg1;
+ (id)_stopCombinatorialExpansionElementTypesForPlatform:(unsigned long long)arg1;
@property BOOL excludeUnlessNecessary; // @synthesize excludeUnlessNecessary=_excludeUnlessNecessary;
@property BOOL allowElementQueries; // @synthesize allowElementQueries=_allowElementQueries;
@property unsigned long long platform; // @synthesize platform=_platform;
@property unsigned long long language; // @synthesize language=_language;
@property(retain) XCElementSnapshot *targetSnapshot; // @synthesize targetSnapshot=_targetSnapshot;
@property unsigned long long targetSnapshotIndex; // @synthesize targetSnapshotIndex=_targetSnapshotIndex;
@property(retain) XCUIRecorderNodeFinderMatch *ancestorNodeFinderMatch; // @synthesize ancestorNodeFinderMatch=_ancestorNodeFinderMatch;
@property(retain) NSMutableArray *unprocessedContainsMatches; // @synthesize unprocessedContainsMatches=_unprocessedContainsMatches;
@property(retain) NSMutableArray *mutableFoundNodeMatches; // @synthesize mutableFoundNodeMatches=_mutableFoundNodeMatches;
- (void).cxx_destruct;
- (id)descendantsQueryNodeWithTargetElementTypeContainingElementsOfType:(unsigned long long)arg1 identifierValue:(id)arg2;
- (id)childrenQueryNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)descendantsQueryNodeWithElementType:(unsigned long long)arg1;
- (id)descendantsQueryNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)childAtIndexNodeWithTargetElementType;
- (id)childAtIndexNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)uniqueChildNodeWithTargetElementType;
- (id)uniqueChildNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)uniqueDescendantNodeWithTargetElementType;
- (id)uniqueDescendantNodeWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)descendantsWithTargetElementTypeContainingDescendantElementsWithType:(unsigned long long)arg1 identifierValue:(id)arg2;
- (id)childrenWithTargetElementType;
- (id)childrenWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)descendantsWithTargetElementType;
- (id)descendantsWithTargetElementTypeAndIdentifierValue:(id)arg1;
- (id)nextNodeFinderMatch;
- (id)_stringConstantForString:(id)arg1;
- (void)removeFromAncestorNodeFinderMatch;
- (void)invalidate;
- (id)initWithTargetSnapshot:(id)arg1 targetSnapshotIndex:(unsigned long long)arg2 ancestorMatch:(id)arg3 allowElementQueries:(BOOL)arg4 excludeUnlessNecessary:(BOOL)arg5 language:(unsigned long long)arg6 platform:(unsigned long long)arg7;
- (id)description;

@end

