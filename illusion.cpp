			unsigned int ISillusionAddy() 
			{
				Datamap* xXx = 0;
				ClientClass* Clientobject;
				Datamap* xXx = (Datamap*)Clientobject->Schema;
				int numberOfTablesOrFields = xXx->numFields;
				auto mapbase = xXx->baseMap;
				TypeDescription* typeDEscription = xXx->dataDesc;
				auto className = xXx->className;
				for (; numberOfTablesOrFields < numberOfTablesOrFields + 1; )
				{
					reinterpret_cast <ClientClass *> (mapbase->numFields)->m_pNext;
					if (typeDEscription->fieldName == "DT_DOTA_BaseNPC_Hero")
					{
					addy = reinterpret_cast <unsigned int>(typeDEscription->flatOffset);
						auto BaseofHeroMap = mapbase;
						auto FieldsHeroMap = (Datamap*)mapbase->numFields;
						TypeDescription* herobaseT = mapbase->dataDesc;
						for (; FieldsHeroMap < FieldsHeroMap + 1; )
						{
							reinterpret_cast <ClientClass *> (BaseofHeroMap->numFields)->m_pNext;
							if (herobaseT->fieldName == "m_hReplicatingOtherHeroModel")
							{
								unsigned int addy = 0x00000000;
								unsigned int offset = 0x0;
								offset = reinterpret_cast <unsigned int>(herobaseT->flatOffset);
								
								return(addy + offset);
							}
						}
					}
				}

			}
